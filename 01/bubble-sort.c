#include <stdio.h>

// 满分 10 分，请输入 5 个成绩, 冒泡排序
void bubble_sort (int arr[], int len) {
  int i;
  int j = 0;
  int temp;

  for (i = 0; i < len - 1; i++)
  {
    for (j = i + 1; j < len; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      printf("i = %d, j = %d: %d %d %d %d %d \n", i, j, arr[0], arr[1], arr[2], arr[3], arr[4]);
    }
  }
  /**
   * 执行次数
   * 8 7 3 1 9
   * i = 0, j = 1: 7 8 3 1 9
   * i = 0, j = 2: 3 8 7 1 9
   * i = 0, j = 3: 1 8 7 3 9
   * i = 0, j = 4: 1 8 7 3 9
   *
   * i = 1, j = 2: 1 7 8 3 9
   * i = 1, j = 3: 1 3 8 7 9
   * i = 1, j = 4: 1 3 8 7 9
   *
   * 浪费的点在这里，已经排序好了，还在执行
   * i = 2, j = 3: 1 3 7 8 9
   * i = 2, j = 4: 1 3 7 8 9
   *
   * i = 3, j = 4: 1 3 7 8 9
  */
}

int main () {
  int len = 5;
  int arr[len];

  printf("请输入 %d 个数 \n", len);
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
  }

  bubble_sort(arr, sizeof(arr)/sizeof(int));

  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);
  }

  printf("\n");
  return 0;
}