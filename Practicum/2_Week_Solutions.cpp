//Task 1
  	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (number > 0) {
		std::cout << number << " is positive." << std::endl;
	}
	else if (number < 0) {
		std::cout << number << " is negative." << std::endl;
	}
	else {
		std::cout << "The number is 0." << std::endl;
	}

//Task 2
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	switch (number) {
	case 1:
		std::cout << "I" << std::endl;
		break;
	case 2:
		std::cout << "II" << std::endl;
		break;
	case 3:
		std::cout << "III" << std::endl;
		break;
	case 4:
		std::cout << "IV" << std::endl;
		break;
	case 5:
		std::cout << "V" << std::endl;
		break;
	case 6:
		std::cout << "VI" << std::endl;
		break;
	case 7:
		std::cout << "VII" << std::endl;
		break;
	case 8:
		std::cout << "VIII" << std::endl;
		break;
	case 9:
		std::cout << "IX" << std::endl;
		break;
	default:
		std::cout << "You must enter a number between 1 and 9!" << std::endl;
		break;
	}

//Task 3
  	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (year % 4 == 0 && ((year % 100 != 0) || year % 400 == 0)) {
		std::cout << year << " is a leap year!" << std::endl;
	}
	else {
		std::cout << year << " is not a leap year!" << std::endl;
	}

//Task 4
	int day;
	std::cout << "Enter a number between 1 and 7: ";
	std::cin >> day;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	switch (day) {
	case 1:
		std::cout << day << " is Monday." << std::endl;
		break;
	case 2:
		std::cout << day << " is Tuesday." << std::endl;
		break;
	case 3:
		std::cout << day << " is Wednesday." << std::endl;
		break;
	case 4:
		std::cout << day << " is Thursday." << std::endl;
		break;
	case 5:
		std::cout << day << " is Friday." << std::endl;
		break;
	case 6:
		std::cout << day << " is Saturday." << std::endl;
		break;
	case 7:
		std::cout << day << " is Sunday." << std::endl;
		break;
	default:
		std::cout << "You have entered an incorrect number!" << std::endl;
		break;
	}

//Task 5
	int num1, num2;
	std::cout << "Enter 2 numbers: ";
	std::cin >> num1 >> num2;

	int biggerNumber = (num1 > num2) ? num1 : num2;
	std::cout << "The biggest number out of " << num1 << " and " << num2 << " is " << biggerNumber << "." << std::endl;

//zad.6
	char ch;
	std::cout << "Enter a character: ";
	std::cin >> ch;

	if (ch >= 'a' && ch <= 'z') 
		std::cout << std::endl << ch << " is small letter and ";
	else if(ch >= 'A' && ch <= 'Z')
    		std::cout << std::endl << ch << " is big letter and ";
 	else
    		return -1;

  	bool isVowel = false;
  	switch(ch) {
	    case 'a':
	    case 'i':
	    case 'o':
	    case 'u':
	    case 'e': 
	    case 'A':
	    case 'I':
	    case 'O':
	    case 'U':
	    case 'E': std::cout << "vowel letter." << std::endl; break;
	    default: std::cout << "consonant letter." << std::endl;
        
	if (ch >= 'a' && ch <= 'z') {
		std::cout << "Reversed lettter: " << (char)(ch - 'a' + 'A') << std::endl;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		std::cout << "Reversed letter: " << (char)(ch - 'A' + 'a') << std::endl;
	}

//Task 7
	int a, b, c;
	std::cout << "Enter the value of 3 numbers: ";
	std::cin >> a >> b >> c;
	
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		int temp = b;
		b = c;
		c = temp;
	} //the biggest is pushed behind
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}

	std::cout << a << ", " << b << ", " << c << std::endl;

//Task 8
	int dx, dy;
	std::cout << "Enter the coordinates of your point:";
	std::cin >> dx >> dy;
	
	int r;
	std::cout << "Enter the radius of the circle: ";
	std::cin >> r;
	if (r <= 0) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

  	int squaredLen = dx * dx + dy * dy;
  	int squaredRadius = r * r;
	if (squaredLen == squaredRadius) {
		std::cout << "Point (" << dx << "," << dy << ") is on the circle." << std::endl;
	}
	else if (squaredLen < squaredRadius) {
		std::cout << "Point (" << dx << "," << dy << ") is inside the circle." << std::endl;
	}
	else {
		std::cout << "Point (" << dx << "," << dy << ") is outside the circle." << std::endl;
	}

//Task 9
	const double EPSILON = 0.000001;
	double lowerBound, upperBound, num;
	std::cin >> lowerBound >> upperBound >> num;
	if(lowerBound > upperBound) {
	    double temp = lowerBound;
	    lowerBound = upperBound;
	    upperBound = temp;
	}
	if (num > lowerBound && num < upperBound)
	{
		std::cout << "The number is within the given interval. The interval is open.";
	}
 	else if (lowerBound - num < EPSILON || num - upperBound < EPSILON)
	{
		std::cout << "The number is within the given interval. The interval is closed.";
	}
	else
	{
		std::cout << "The number is not within the given interval.";
	}

//Task 10
	int n;
	std::cin >> n;
	int d1 = n / 1000;
	int d2 = n / 100 % 10;
	int d3 = n / 10 % 10;
	int d4 = n % 10;
	int firstNum = d1 * 10 + d4;
	int secondNum = d2 * 10 + d3;
	char sign = (firstNum < secondNum) ? '<' : ((firstNum > secondNum) ? '>' : '=');
	std::cout << firstNum << " " << sign << " " << secondNum;

//Task 11
	int day, month, year;
	std::cin >> day >> month >> year;
	bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
	bool validDate = year >= 0;
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			validDate = validDate && day >= 1 && day <= 31;
			break;
		case 2:
			validDate = validDate && day >= 1 && (day <= (isLeapYear ? 29 : 28));
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			validDate = validDate && day >= 1 && day <= 30;
			break;
		default: validDate = false;
	}
	std::cout << validDate;

//Task 12
  	int x1, y1, x2, y2, x3, y3, minX, minY, maxX, maxY;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	// намираме минималните и максималните координати от двете дадени точки
	if (x1 > x2)
	{
		maxX = x1;
		minX = x2;
	}
	else
	{
		maxX = x2;
		minX = x1;
	}
	if (y1 > y2)
	{
		maxY = y1;
		minY = y2;
	}
	else
	{
		maxY = y2;
		minY = y1;
	}

	bool isOnLowerOrUpperLine = (y3 == minY || y3 == maxY) && (x3 >= minX && x3 <= maxX);
	bool isOnLeftOrRightLine = (x3 == minX || x3 == maxX) && (y3 >= minY && y3 <= maxY);

	if (x3 > minX && x3 < maxX && y3 > minY && y3 < maxY)
	{
		std::cout << "In the rectangle";
	}
	else if (isOnLowerOrUpperLine || isOnLeftOrRightLine)
	{
		std::cout << "On the rectangle";
	}
	else
	{
		std::cout << "Outside the rectangle";
	}

//Task 13
	double a, b, c;
	std::cout << "You are given the equation ax^2 + bx + c = 0." << std::endl;
	std::cout << "Enter the value of coef. a, b and c: ";
	std::cin >> a >> b >> c;

	if (a == 0) {
		if (b != 0) {
			std::cout << "The equation " << b << "x + " << c << " = 0 has 1 root." << std::endl;
		}
		else if (c == 0) {
			std::cout << "The equation has infinitely many solutions." << std::endl;
		}
		else {
			std::cout << "The equation has no solution." << std::endl;
		}
	}

	double d = b * b - 4 * a * c;

	if (d > 0) {
		std::cout << "The equation has two real roots." << std::endl;
	}
	else if (d == 0) {
		std::cout << "The equation has one real double root." << std::endl;
	}
	else {
		std::cout << "The equation has zero real roots." << std::endl;
	}

//Task 14 
	const int LETTER_DIFF = 'a' - 'A';
	char lowerBoundA, upperBoundA, lowerBoundB, upperBoundB, letter;
	std::cin >> lowerBoundA >> upperBoundA >> lowerBoundB >> upperBoundB >> letter;
	char swappedCaseLetter = (letter >= 'A' && letter <= 'Z') ? letter + LETTER_DIFF : letter - LETTER_DIFF;
	bool belongsToA = (letter >= lowerBoundA && letter <= upperBoundA)
		|| (swappedCaseLetter >= lowerBoundA && swappedCaseLetter <= upperBoundA);
	bool belongsToB = (letter >= lowerBoundB && letter <= upperBoundB)
		|| (swappedCaseLetter >= lowerBoundB && swappedCaseLetter <= upperBoundB);
	bool belongsToUnion = belongsToA || belongsToB;
	bool belongsToIntersection = belongsToA && belongsToB;
	bool belongsToDifference = belongsToA && !belongsToB;
	bool belongsToOnlyOne = belongsToUnion && !belongsToIntersection;

	std::cout << "(Union, Intersection, Difference, Only one) : " 
		<< (belongsToUnion ? "true" : "false") << ", "
		<< (belongsToIntersection ? "true" : "false") << ", "
		<< (belongsToDifference ? "true" : "false") << ", "
		<< (belongsToOnlyOne ? "true" : "false");

