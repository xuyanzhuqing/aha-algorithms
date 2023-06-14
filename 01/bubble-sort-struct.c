#include <stdio.h>

struct Student {
  char name[100];
  int score;
};

// 满分 10 分，请输入 5 个成绩, 冒泡排序
/**
 * 时间复杂度 O(n^2)
 * 效率不高
*/
void bubble_sort (struct Student arr[], int len) {
  int i;
  int j = 0;
  struct Student temp;

  for (i = 0; i < len - 1; i++)
  {
    for (j = i + 1; j < len; j++) {
      if (arr[i].score > arr[j].score) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main () {
  int len = 5;
  struct Student arr[len];

  printf("请输入 %d 个数 \n", len);
  for (int i = 0; i < len; i++) {
    scanf("%s %d", arr[i].name, &arr[i].score);
  }

  bubble_sort(arr, sizeof(arr)/sizeof(struct Student));

  for (int i = 0; i < len; i++) {
    printf("%s %d \n", arr[i].name, arr[i].score);
  }

  printf("\n");
  return 0;
}