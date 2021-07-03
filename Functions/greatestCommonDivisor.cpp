/*
 * Complete the function 'gcd'
 * @params
 *   i -> first integer
 *   j -> second integer
 *
 *  @returns
 *  an integer, denoting the gcd of i and j
 */
int gcd(int i, int j){
  if(j == 0){
    return i;
  }
  return gcd(j,i%j);
}