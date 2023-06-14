#include <stdio.h>

// 满分 10 分，请输入 5 个成绩, 桶排序
/*
  优点: O(n)
  缺点: 对于离散度高的数据非常浪费空间
*/
void bucket_sort (int arr[], int len, int max) {
  int bucket[max];
  int i;
  int j = 0;
  int k = 0;

  // 初始化数组
  for (i = 0; i < max; i++) {
    bucket[i] = 0;
  }

  for (i = 0; i < len; i++)
  {
    bucket[arr[i]]++;
  }
  printf("\n");

  for (i = max - 1; i >= 0; i--) {
    if (bucket[i] > 0) {
      for (k = 0; k < bucket[i]; k++) {
        arr[j++] = i;
      }
    }
  }
}

int main () {
  int len = 5;
  int max = 10;
  int arr[len];

  printf("请输入 %d 个不大于 %d 的数 \n", len, max);
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] > max) {
      return 1;
    }
  }

  bucket_sort(arr, sizeof(arr)/sizeof(int), max);

  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);
  }

  printf("\n");
  return 0;
}