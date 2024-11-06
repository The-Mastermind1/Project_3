#include"Header.h"

int main() {
	double a;
	double b;
	cout << "enter [a,b]" << '\n';
	cout << "a:";
	std::cin >> a;
	cout << "b:";
	std::cin >> b;
	cout << '\n';
	size_t iterations = 0;
	cout << "enter the maximum number of iteration:";
	size_t max_iterations;
	std::cin >> max_iterations;
	cout << '\n';
	cout << "enter initial guess:";
	double x0;
	std::cin >> x0;
	cout << '\n';
	cout << "enter maximum tolerance:";
	double tol;
	std::cin >> tol;
	double x1;
	double xstar = 0.0;
	cout << '\n';
	cout << "metodos newton\n";
	do {
		x1 = x0 - (fungf(x0) / dfungf(x0));
		cout << "Iteration-" << iterations << ":\t x1 = " << std::setw(10) << x1 << " and f(x1) = " << std::setw(10) << fungf(x1) << " ek =" << std::setw(10) << x1 - xstar << '\n';
		iterations++;
		if (iterations > max_iterations) {
			cout << "failed to find the solution\n";
			std::exit(EXIT_FAILURE);
		}
		x0 = x1;
	} while (std::fabs(fungf(x1))>tol);
	cout << "root found:" << x1 << '\n';
	cout<<"enter your initial guess again"<<'\n';
	std::cin>>x0;
	iterations = 0;
	cout << "metodos stateroy shmeioy\n";
	do {
		x1 = fungg(x0);
		cout << "Iteration-" << iterations << ":\t x1 = " << std::setw(10) << x1 << " and f(x1) = " << std::setw(10) << fungf(x1) << " ek =" << std::setw(10) << x1 - xstar << '\n';
		iterations++;
		if (iterations > max_iterations) {
			cout << "failed to find the solution\n";
			std::exit(EXIT_FAILURE);
		}
		x0 = x1;
	} while (std::fabs(fungf(x1)) > tol);
	cout << "root found:" << x1 << '\n';

}
