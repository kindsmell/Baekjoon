//2751수정렬하기2
#include <stdio.h>

void merge(int list[], int left, int mid, int right) {

  int sorted[1000000];
  int i, j, k, l;
  i = left;
  j = mid + 1;
  k = left;

  while (i <= mid && j <= right) //둘 중 하나라도 끝에 도달하면 끝
  {
    if (list[i] <= list[j])
      sorted[k++] = list[i++];
    else
      sorted[k++] = list[j++];
  }

  if (i > mid) // left에서 시작한 그룹이 끝에 도달
  {
    for (l = j; l <= right; l++)
      sorted[k++] = list[l];
  } else // mid+1에서 시작한 그룹이 끝에 도달
  {
    for (l = i; l <= mid; l++)
      sorted[k++] = list[l];
  } //여기까지 하면 sorted에 정렬되어서 담겨짐

  //옮기기
  for (l = left; l <= right; l++)
    list[l] = sorted[l];
}
//
void merge_sort(int list[], int left, int right) {
  int mid;

  //재귀함수로 divide, sort, merge
  if (left < right) {
    mid = (left + right) / 2;
    merge_sort(list, left, mid);
    merge_sort(list, mid + 1, right);
    merge(list, left, mid, right);
  }
}

int main() {
  int list[1000000];
  int n;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &list[i]);
  }

  merge_sort(list, 0, n - 1);

  for (int i = 0; i < n; i++) {
    printf("%d\n", list[i]);
  }
}