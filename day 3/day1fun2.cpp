//day2에 등장하는 배열의 원소들 중 두개의 합이 100이 되면 1을 리턴하는 함수를 배열로 구현
int func2(int arr[], int N){
  int occur[101] = {}; // 1~100까지 담을 배열
  for(int i = 0; i < N; i++){
    if(occur[100-arr[i]] == 1) // 기존 배열의 값에다가 100을 빼서 해당 값이 존재하는지 판단하고
      return 1;
    occur[arr[i]] = 1; //없든 말든 그것을 담는 과정
  }
  return 0;
}
