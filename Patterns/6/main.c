#include <stdio.h>

int main(){
	int i,j,k,l;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("1");
		};
		printf("\n");
	};
	for(k=1;k<=3;k++){
		for(l=3;l>=k;l--){
			printf("1");
		};
		printf("\n");
	};
};

// Alternate method:
// for(i=1;i<=7;i++){
//     if(i<=4){
//         for(j=1;j<=i;j++){
//             printf("1");
//         };
//         printf("\n");
//     }
//     else{
//         for(j=7;j>=i;j--){
//             printf("1");
//         };
//         printf("\n");
//     };
// };