bool verifyPrime(int n){
  // Write your code her
  if(n == 0 || n == 1){
      return false;
  }
  for (int i = 2; i < n; i++)
  {
      if(n%i == 0){
          return false;
      }
  }
  return true;
}