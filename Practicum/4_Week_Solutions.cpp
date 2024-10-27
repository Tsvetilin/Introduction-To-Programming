
	file 4 week

	/*
	* task 1
	int n;
	std::cin >> n;
	int a, b;
	bool simple;
	for (int i = 1; i < n/2; i++)
	{
		simple = true;
		a = i;
		b = n - i;
		for (int j = 2; j < a; j++) if (a % j == 0)
		{
			simple = false;
			break;
		}
		for (int j = 2; j < b; j++) if (b % j == 0)
		{
			//std::cout << simple;
			simple = false;
			break;
		}
		//if (simple) break;
		if (simple) std::cout <<"a=" << a << " b=" << b;
	}/*
	if (simple) std::cout << "true";

	std::cout <<"a=" << a << " b=" << b;
	*/
	/*
	* task 2 
	int n;
	double last=0.5, ans;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		ans = (last * last + 1) / 2.0;
		last = ans;
	}
	std::cout << ans;

	task 3
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i;j++) std::cout << "$ ";
		std::cout << std::endl;
	}


	task 5
int n;
std::cin >> n;
for (int i = 1; i < n; i++) {
	int padding = (n - i) * 4 + 2; 

	for (int j = 1; j <= i; j++) {
		std::cout << j << " ";
	}

	for (int a = 1; a <= padding; a++) {
		std::cout << " ";
	}

	for (int j = i; j >= 1; j--) {
		std::cout << j << " ";
	}

	std::cout << std::endl;
}

	чертички?
for (int i = 1; i <= n; i++) {
	std::cout << i << " ";
}
for (int i = 1; i <= n; i++) {
	std::cout << "- ";
}
for (int i = n; i >= 1; i--) {
	std::cout << i << " ";
}
std::cout << std::endl;

for (int i = n - 1; i >= 1; i--) {
	int padding = (n - i) * 4 + 2;  

	for (int j = 1; j <= i; j++) {
		std::cout << j << " ";
	}

	for (int a = 1; a <= padding; a++) {
		std::cout << " ";
	}

	for (int j = i; j >= 1; j--) {
		std::cout << j << " ";
	}

	std::cout << std::endl;
}

	task 7

	int n;
	std::cin >> n;

	int smallDiff = 1;
	int bigDiff = n * 2 - 1;

	for (int i = 1; i <= n; i++) {
		int num = i;

		for (int j = 1; j <= n; j++) {
			std::cout << num << " ";
			num += (j % 2 != 0) ? bigDiff : smallDiff;
		}

		bigDiff -= 2;
		smallDiff += 2;
		std::cout << "\n";
	}

	
int n;
std::cin >> n;

int num = 0;

for (int i = 1; i <= n; i++) {
	if (i % 2 != 0) {
		for (int j = 0; j < n; j++) {
			std::cout << ++num << " ";
		}
	}
	else {
		num += n;  
		for (int j = 0; j < n; j++) {
			std::cout << num-- << " ";
		}
		num += n;  
	}
	std::cout << "\n";
}
*/	
