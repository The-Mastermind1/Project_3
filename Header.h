#pragma once
#include<iostream>
#include<new>
#include<cstdio> 
#include<vector>
#include<raylib.h>
#include<list>
#include<fstream>
#include<array>
#include<cmath>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<stack>
#include<string>
#include<cstring>
#include<unordered_map>
#include<bitset>
#include<queue>
#include<set>
#include<unordered_set>
#include<thread>
#include<utility>
#include<future>
#include<memory>
#include<cassert>
#include<mutex>
#include<exception>
#include<type_traits>
#include<iomanip>
#include<cstdlib>
#include<execution>
#include<numeric>
using std::cout;

double fungf(double x) {
	return std::exp(x) + std::cos(PI * x) + x - 2;
}
double fungg(double x) {
	return ( - std::exp(x) - std::cos(PI * x) + 2.0);
}
double dfungf(double x) {
	return std::exp(x) - std::sin(PI * x) * PI + 1;
}