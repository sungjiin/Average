// midAvg.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <array>

using namespace std;

//최대값 최소값을 제외한 중간에 있는 숫자들의 평균 값 구하기
// 1. 10개의 숫자를 입력 받는다.
// 2. 최대값과 최소값을 제외한 8개의 숫자들의 평균 값을 구한다.
// 3. 결과값은 첫번째 소수점에서 반올림한 값이다.

int main()
{
	array <int, 10> arr;
	int temp;
	int t;
	double result=0;

	cin >> t; 
	for (int i = 1; i <= t; i++) {
		// arr배열의 크기(10)만큼 숫자를 입력받아 저장한다.
		for (int j = 0; j < arr.size(); j++) {
			cin >> arr[j];
		}
		// 입력받은 arr배열안의 값들을 순서대로 정렬한다.
		for (int j = 1; j < arr.size(); j++) {
			for (int k = 0; k < j; k++) {
				if (arr[j] < arr[k]) {
					temp = arr[k];
					arr[k] = arr[j];
					arr[j] = temp;
				}
			}
		}

		// 정렬한 arr배열의 값중 최대값과 최소값을 제외한 나머지 값들의 합을 구한다.
		for (int j = 0; j < arr.size(); j++) {
			if (j > 0 && j < arr.size() - 1) {
				result += arr[j];
			}
		}
		result /= 8; // 평균값
		cout << fixed;
		cout.precision(0);// 반올림하여 값을 나타냄
		cout<<'#'<<i<<' '<< result <<'\n';

		//result값 0으로 초기화
		result = 0;
	}



}
