#include<stdio.h>
#include<stdlib.h>
struct box
{
	int length;
	int width;
	int height;
};

typedef struct box box;

int get_volume(box b) {
	int volume ;
	volume = b.length * b.width * b.height;
	return volume;
}

int is_lower_than_max_height(box b) {
	int a;
	a =b.height<41 ? 1 : 0;
	return a;
}
int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}