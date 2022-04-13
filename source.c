#include <stdio.h>
#include <math.h>

int main() {
	double temp, temp2, time, outTemp;
	
	outTemp = 20; // 외부 온도 
	
	temp = 100; // 초기 온도 
	temp2 = 98; // 1초 후의 온도 비례상수 c의 결정을 위해서 무조건 필요 
	
	double c = (temp - outTemp); // 비례 상수 
	
	temp2 = temp2 - outTemp;
	
	double ek = log(temp2 / c) ; 
	
	for(int i = 0; i < 50; i++) {
		if( i % 5 == 0)
			printf("\n");
			
		printf("%.2lf || ", outTemp + (c * exp(ek * i) )); // i초의 온도 변환 
	
	}
	
	
}
