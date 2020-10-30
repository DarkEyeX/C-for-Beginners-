#include <stdio.h>

int main (){
	int a[] ={1,2,5,3,6,9,4,8,4,8,9,54,2,6,4};
	int target = 4;
	for (int i=0;i<=14;i++) {
		if (a[i] == target) {
			printf ("target %d found @ index %d\n",a[i],i);
		}
	}
	return 0;
}
