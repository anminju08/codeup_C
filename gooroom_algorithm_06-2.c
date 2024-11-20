#include <stdio.h>

int n, cnt;
int sorted[100];
int list[100];

void merge(int left,int mid, int right){
    int i = left, j = mid + 1, k = left, l;

    while (i <= mid && j <= right){
        if (list[i] >= list[j]) sorted[k++] = list[i++];
        else sorted[k++] = list[j++];
    }

    if (i > mid) for (l = j ; l <= right ; l++) sorted[k++] = list[l];
    else for (l = i ; l <= mid ; l++) sorted[k++] = list[l];

    for (l = left ; l <= right ; l++) list[l] = sorted[l];

    printf("%d단계 : ", ++cnt);
    for (int i = 0 ; i != n ; i++) printf("%d ", list[i]);
    printf("\n");
}

void mergesort(int left,int right){
    int mid;

    if(left<right){
        mid = (left+right) / 2;
        mergesort(left, mid);
        mergesort(mid + 1, right);
        merge(left, mid, right);
    }
}

int main(){
    scanf("%d", &n);

    for (int i = 0 ; i != n ; i++) scanf("%d", &list[i]);

    mergesort(0, n - 1);

    return 0;
}