#include "hw1.h"
#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;
using Matrix = vector<vector<double>>;

namespace algebra {
	//0矩阵
	Matrix zeros(size_t n, size_t m) {
		Matrix mat(n, vector<double>(m));
		for (size_t i = 0; i < n; i++) {
			for (size_t j = 0; j < m; j++) {
				mat[i][j] = 0;
			}
		}
		return mat;
	};
	//1矩阵
	Matrix ones(size_t n, size_t m) {
		Matrix temp(n, vector<double>(m));
		for (size_t i = 0; i < n; i++) {
			for (size_t j = 0; j < m; j++) {
				temp[i][j] = 1;
			}
		}
		return temp;

	};
	//随机矩阵
	Matrix random(size_t n, size_t m, double min, double max) {
		Matrix mat(n, vector<double>(m));
		//生成随机数种子
		mt19937 gen(random_device{}());
		uniform_int_distribution<double> dis(min, max);
		for (size_t i = 0; i < n; i++) {
			for (size_t j = 0; j < m; j++) {
				mat[i][j] = dis(gen);
			}
		}
		return mat;
	}
	//show matrix
	void show(const Matrix& matrix) {
	}
};