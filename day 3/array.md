배열 - 메모리 상에 원소를 연속학 배치한 자료구조

배열의 성질
1. O(1)에 k번째 원소를 확인/변경 가능
2. 배열은 추가적으로 소모되는 메모리의 양(=overhead)가 거의 없다.
3. 메모리상의 Cache hit rate가 높음
4. 연속한 구간이 point 할당에 제약이 있다.
   
배열에서 가장 기억해야 할 4가지 특징
  1. 임의의 위치에 있는 원소를 확인하거나 변경하는 것은 O(1)의 시간복잡도가 든다.
  2. 원소를 끝에 추가하는 것은 O(1) 시간복잡도가 든다.
  3. 마지막의 원소를 제거하는 것은 O(1) 시간복잡도가 든다.
  // 이 모든것은 length가 k인 배열에서 길이 k만큼 오른쪽으로 바로 이동하면 되기 때문이다.
  4. 하지만 임의의 위치에 원소를 추가하거나/ 임의의 위치에 제거하는 것은 O(N)의 시간복잡도가 든다.
  --> 그 이유는 해당 위치 N에 대해 모든 원소를 뒤로 밀거나 삭제시 해당 지워야 하는 장소의 부분의 값을 지우고 그 후의 값들을 땡겨와서
  연속되게 해줘야하기 때문이다. 배열은 연속된 자료구조이다. 가장 큰 특징이 깨지면 안된다.
  
c++에서 사용하는 팁은 for문을 사용해 일일히 채우거나, for문 안에 fill(a[i], a[i]+끝위치, 초기화 할 값)해서 채워넣기

c++ STL Vector
배열에 동적요소가 추가된 STL
인접 리스트 사용할 때 ?