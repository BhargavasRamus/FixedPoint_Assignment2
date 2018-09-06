#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  double a[10] = {-8.31662009587695e-13,0.634029328751641,-0.767445067471676,
                    1.21423064425930, -0.398089786809545, 0.577773754381422, 0.836673932101677,
                    -0.308971047587158, 1.58778525229245, -0.182021563971272};

  double b[10] = {0.256258710000824, -0.299311523023751 ,1.18013824251201 ,-0.724526570403471,0.963365491184473,
0.0611683879836982 ,-0.126424722362053,1.08772832230303, -0.743741290000000, 1.08772832230147};
  
  int A[10];
  int B[10];
  for(int i=0;i<10;i++){
    A[i]=(int)(a[i]*pow(2,14));
    B[i]=(int)(b[i]*pow(2,14));
  }
  
  int C[10];
  double c[10];
  for (int k=0;k<10;k++) {
    C[k] = 0;
    c[k] = 0;
  }
  
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(i+j<10)
      C[i]+=A[j]*B[i+j];
    }
  }
  for(int i=0;i<10;i++){
    c[i]=(double)(C[i]/(double)pow(2,28));
    printf("C[%d]=%lf\n",i,c[i]);
  }
}
