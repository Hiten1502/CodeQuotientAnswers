struct MinHeap {
	unsigned size; 
	unsigned capacity; 
	int* harr;
};
struct MinHeap* createMinHeap(unsigned capacity)
{
	struct MinHeap* minHeap = new MinHeap;
	minHeap->size = 0;
	minHeap->capacity = capacity;
	minHeap->harr = new int[capacity];
	return minHeap;
}
void swapMinHeapNode(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void minHeapify(struct MinHeap* minHeap, int idx)
{
	int smallest = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;
	if (left < minHeap->size
		&& minHeap->harr[left] < minHeap->harr[smallest])
		smallest = left;
	if (right < minHeap->size
		&& minHeap->harr[right] < minHeap->harr[smallest])
		smallest = right;
	if (smallest != idx) {
		swapMinHeapNode(&minHeap->harr[smallest], &minHeap->harr[idx]);
		minHeapify(minHeap, smallest);
	}
}
int isSizeOne(struct MinHeap* minHeap)
{
	return (minHeap->size == 1);
}
int extractMin(struct MinHeap* minHeap)
{
	int temp = minHeap->harr[0];
	minHeap->harr[0] = minHeap->harr[minHeap->size - 1];
	--minHeap->size;
	minHeapify(minHeap, 0);
	return temp;
}
void insertMinHeap(struct MinHeap* minHeap, int val)
{
	++minHeap->size;
	int i = minHeap->size - 1;
	while (i && (val < minHeap->harr[(i - 1) / 2])) {
		minHeap->harr[i] = minHeap->harr[(i - 1) / 2];
		i = (i - 1) / 2;
	}
	minHeap->harr[i] = val;
}
void buildMinHeap(struct MinHeap* minHeap)
{
	int n = minHeap->size - 1;
	int i;
	for (i = (n - 1) / 2; i >= 0; --i)
		minHeapify(minHeap, i);
}
struct MinHeap* createAndBuildMinHeap(
	int len[], int size)
{
	struct MinHeap* minHeap = createMinHeap(size);
	for (int i = 0; i < size; ++i)
		minHeap->harr[i] = len[i];
	minHeap->size = size;
	buildMinHeap(minHeap);
	return minHeap;
}
int connectCost(int lengths[], int n){
	int cost = 0; 
	struct MinHeap* minHeap = createAndBuildMinHeap(lengths, n);
	while (!isSizeOne(minHeap)) {
		int min = extractMin(minHeap);
		int sec_min = extractMin(minHeap);
		cost += (min + sec_min); 
		insertMinHeap(minHeap, min + sec_min);
	}
	return cost;
}
