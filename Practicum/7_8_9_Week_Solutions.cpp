WEEK 7
---------------------------------------------------------------------------------------------------------------------------------------------------------------
//zad 1
int pow(int base, int stepen) {
	int num = 1;
	for (int i = 0; i < stepen; i++) {
		num *= base;
	}
	return num;
}
int getValuefromChar(char e) {
	int num = 0;
	if (e >= '0' && e <= '9') {
		return e - '0';
	}
	else if(e >= 'A' && e <= 'Z') {
		return e - 'A' + 10;
	}
	else {
		return -1;
	}
}
char getValuefromInt(int e) {
	if (e >= 0 && e <= 9) {
		return e + '0';
	}
	else if(e >= 9 && e <= 35) {
		return e + 'A' - 10;
	}
	else {
		return -1;
	}
}
void from_char_to_int(char c[], int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = getValuefromChar(c[i]);
	}
}
void new_array_con(int a[], int n, int k) {
	int i = n - 1;
	while (a[i] >= k - 1) {
		a[i] = 0;
		i--;
	}
	a[i]++;

}
void from_int_to_char(char c[], int a[], int n) {
	for (int i = 0; i < n; i++) {
		c[i] = a[i] + '0';
	}
}

void increment_char_array(char array[], int array_int[], int size, int k, char result[]) {
	from_char_to_int(array, array_int, size);
	new_array_con(array_int, size, k);

	from_int_to_char(result, array_int, size);
}
//zad 2
void char_to_int(char a[], int size, int b[]) {
	for(int i=0; i<size; i++) {
		b[i] = get_value(a[i]);
	}
}

void int_to_char(char a[], int size, int b[]) {
	for(int i=0; i<size; i++) {
		a[i] = get_value_c(b[i]);
	}
}
void minus_one(int b[],int size, int k) {
	int i = size - 1;
	while(b[i] == 0) {
		b[i] = k-1;
		i--;
	}
	b[i] = b[i] - 1;
}
void print(int size, char a[]) {
	for(int i=0; i < size; i++) {
		std::cout<<a[i]<<" ";
	}
}
void decrement(char a[], int b[], int size, int k) {
	char_to_int(a, size, b);
	minus_one(b, size, k);
	int_to_char(a, size, b);
	print(size, a);

}
//zad3
void sum_of_chars(char ac[], char bc[], int size, int k, int a[], int b[], char res[]) {
    char_to_int(ac, size, a);
	char_to_int(bc, size, b);
	int i = size - 1;
	bool edno_naum = false;
	for(int i = size - 1; i>=0; i--)
	{	int sum = a[i] + b[i];
		if(edno_naum) {
			sum++;
		}
		if(sum >= k) {
			a[i] = sum - k;
			edno_naum = true;
		}
		else {
			a[i] = sum;
			edno_naum = false;
		}

	}
	int_to_char(res, size, a);
    print(size, res);
    
}
//zad3-bonus-substraction
void substraction_of_chars(char ac[], char bc[], int size, int k, int a[], int b[], char res[]) {
    char_to_int(ac, size, a);
	char_to_int(bc, size, b);
	int i = size - 1;
	bool edno_naum_minus = false;
	for(int i = size - 1; i>=0; i--)
	{	int substraction = a[i] - b[i];
		if(edno_naum_minus) {
			substraction--;
		}
		if(substraction < 0) {
			a[i] = substraction + k;
			edno_naum_minus = true;
		}
		else {
			a[i] = substraction;
			edno_naum_minus = false;
		}

	}
	int_to_char(res, size, a);
    print(size, res);
    
}
//zad 4
bool is_array_palindrome(char a[], char b[], int& len) {

	for(int i=0; i<len; i++)
	{
		if(a[i] != b[i]) {
			return 0;
		}
	}
	return 1;
}

void reversed_new_array(char a[],char b[], int& len_result) {
	for(int i=0; i<len_result; i++) {
		b[i] = a[len_result - i -1];
	}
}
bool is_new_number_palindrome(unsigned int number, char a[], char b[],int& len, int k) {
	FromDecimalToNumber(number, k, a, len);
	reversed_new_array(a, b, len);
	return is_array_palindrome(a, b, len);

}

void reversed_array(char a[], char res[], int& len) {
	for(int i=0; i<len/2; i++) {
		res[i] = a[i];
	}
}

bool are_the_same(char a[], char res[], int& len) {
	for(int i=0; i<len; i++) {
		if(a[i] != res[i]) {
			return 0;
		}
	}
	return 1;
}
//zad5
int FromNumberToDecimal(char digits[], int size, int k) {
	int decimal = 0;
	for (int i = 0; i < size; i++) {
		decimal += getValuefromChar(digits[i]) * pow(k, size - i - 1);
	}
	return decimal;


}
void swap(char& a, char& b) {
	char help =a;
	a=b;
	b=help;
}
void reversed(char a[], int& len_result) {
	for(int i=0; i<len_result/2; i++) {
		swap(a[i], a[len_result-i-1]);
	}
}
void FromDecimalToNumber(unsigned int decimal, int m, char result[], int& len_result) {
	int len_result = 0;
	//int len = len_num(decimal);
	while(decimal) {
		int digit = decimal % m;
		result[len_result++] = getValuefromInt(digit);
		decimal /= m;
	}
	reversed(result, len_result);

}

bool numbers_are_equal(char n1[], char n2[], int k1, int k2, int len1, int len2) {
	int number1 = FromNumberToDecimal(n1, len1, k1);
	int number2 = FromNumberToDecimal(n2, len2, k2);
	return (number1 == number2);
}

WEEK 8
---------------------------------------------------------------------------------------------------------------------------------------------------------------
bool isEven(int x) {
    int mask = 1;
    return !(x & mask);
}
int toPowofTwo(int pow) {
    return 1 << pow;
}

int clear_bit(int number, int index) {

    int mask = ~(1 << index);
    return (number & mask);
}

int set_bit(int number, int index) {

    int mask = (1 << index);
    return (number | mask);
}

int flip_bit(int& number, int index) {

    int mask = (1 << index);
    number ^= mask;
    return number;
}

int change_number(int number, int idx, bool bit) {
    if (bit) {
        return (set_bit(number, idx));
    }
    else {
       return (clear_bit(number, idx));
    }
}
bool checkbit(int number, int index) {
    number >> index;
    return number & 1;
}
int change_number_prim(int number, int idx, bool bit) {
    if (checkbit(number, idx) != bit) {
        return flip_bit(number, idx);
    }
    else {
        return number;
    }
}
//zad1
int len_num(int a){
    if(a == 0){
        return 1;
    }
    int count = 0;
    while(a != 0){
    a = a>>1;
    count++;
        
    }
    return count;
    
}
bool checkbit(int number, int idx){
    int mask = 1 << idx;
    return mask & number;
}
int slice_end(int a, int len_b){
    int res = 0 ;
    for(int i=len_b-1; i>=0;i--){
        res += checkbit(a,i);
        if(i == 0)break;
        res = res << 1;
    }
    return res;
}
//zad 2
bool checkbit(int number, int idx){
    int mask = 1 << idx;
    return mask & number;
}
int ones_count(int n){
    int count_ones = 0;
    int idx = 0;
    int n1 = n;
    while(n1){
        if(checkbit(n, idx) == 1) {
            count_ones++;
        }
        idx++;
        n1 = n1 >> 1;
    }
    return count_ones;
}

//zad 3
int last_numbers(int number, int k){
    int mask = 0;
    for(int i=0;i<k;i++){
        mask += 1;
        if(i==k-1)break;
        mask <<= 1;
    }
    return mask & number;
}

int flip_bit(int n, int k, int bit){
    int mask = 1 << k;
    return n ^ mask;
}
int changed_number(int n, int k, int bit){
    if(checkbitbug(n, k) != bit){
        flip_bit(n, k, bit);
    }
    else return n;
}
//zad4
void swap_numbers_binary(int& a, int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

//zad5
int flip_bit(int n, int k, int bit){
    int mask = 1 << k;
    return n ^ mask;
}
int changed_number(int n, int k, int bit){
    if(checkbitbug(n, k) != bit){
        flip_bit(n, k, bit);
    }
    else return n;
}
//zad 6
void count_bits(int n, int ar[]){
    int ones_count = 0;
    int nulls_count = 0;
    while(n != 0){
    if(checkbitbug(n,0) == 1)ones_count++;
    else nulls_count++;
    n = n >> 1;
    ar[0] = nulls_count;
    ar[1] = ones_count;
}}

bool all_bits(int num1, int num2, int n1[], int n2[]){
    count_bits(num1, n1);
    count_bits(num2, n2);
    
    for(int i=0;i<2;i++){
        if(n1[i] > n2[i]){
            return 0;}
    }
    return 1;
}



//BONUS ZADACHI
//1;
int getMissing(const int arr[], size_t size)
{
    int result = 0;
    for(unsigned i = 0; i < size; i++)
        result ^= arr[i];
    return result;
}
//2
bool checkbit(int number, int idx){
    int mask = 1 << idx;
    return mask & number;
}
int ones_count(int n){
    int count_ones = 0;
    int idx = 0;
    int n1 = n;
    while(n1){
        if(checkbit(n, idx) == 1) {
            count_ones++;
        }
        idx++;
        n1 = n1 >> 1;
    }
    return count_ones;
}

void all_digits(int n, int array[], int size){
    std::cout<<"[";
    for(int idx = size - 1;idx>=0;idx--){
        
        if(checkbit(n, idx))std::cout<<array[size - 1- idx]<<" ";
        
    }
    
   
    std::cout<<']';
    std::cout<<'\n';
}

void print_subarrays(int array[], int size){
    int max_subset = pow(2, size) - 1;
    for(int i=0;i <= max_subset; i++){
        all_digits(i, array, size);
    }
}
WEEK 9
-------------------------------------------------------------------------------------------------------------------------------------------------------------
//zad1
const int ARRAY_SIZE = 1024;
void shifting(char* a) {
    
    while ((*a) != '\0') {
        *a = *(a+1);
        //std::cout << a << '\n';
        a++;
    }
    *a = '\0';
}

void print_new_text(char* n) {
    while ((*n) != '\0') {
        std::cout << (*n);
        n++;
        
    }
}

void new_text(char* text, char symbol) {
    while (*text != '\0') {
        if (*text == symbol) {
            shifting(text);
            //print_new_text(text);
            //std::cout << '\n';

        }
        text++;
    }
}

//zad2
void copyword(char text[], char word[], int& indxtext, int& indxword, int len2, int len1) {
    for (int i = 0;i < len2;i++) {
        text[indxword + i] = word[i];
    }
    indxtext += len2;
    indxword += len2;
    
    indxtext += (len1 - len2);
}
void new_text_zad2(char text[], char word[],char new_text[], int indexes[], int len2, int len1) {
    int i = 0;
    int j = 0;
    int idx = 0;
    while (text[i] != '\0') {
        int pos = indexes[idx];
        if (i == pos) {
            copyword(new_text, word, i, j, len2, len1);
            idx++;
            /*print_new_text(new_text);
                std::cout <<'\n';*/

        }
        //print_new_text(new_text);
        new_text[j] = text[i];
        i++;
        j++;
    }
    new_text[j] = '\0';
}



//zad3
void toLowerandUpper(char* n) {
    while ((*n) != '\0') {
        if ((*n) >= 'a' && (*n) <= 'z') {
            *n  = *n - 'a' + 'A';
        }
        else if ((*n) >= 'A' && (*n) <= 'Z') {
            *n = *n + 'a' - 'A';
        }
        n++;
    }
}
//zad4
int char_to_int(char el) {
    return el - '0';
}
void digits_ar(int array[], char c[],int size){
    for(int i=0;i<size;i++){
        array[i] = char_to_int(c[i]);
    }
}
void swap(int& a, int& b) {
    int help = a;
    a = b;
    b = help;
}
void SelectionSort(int array[], int size) {
    for (int i = 0;i < size - 1;i++) {
        int min_idx = i;
        for (int j = i;j < size;j++) {
            if (array[min_idx] > array[j]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(array[min_idx], array[i]);
        }
    }
}

void print_counts(int array[], int size, char ar[]){
    digits_ar(array,ar,size);
    SelectionSort(array, size);
    int count = 1;
    for (int i = 0;i < size-1;i++) {
        if (array[i] != array[i + 1]||i==size-2){
            if (i == size - 2) {
                count++;
            }
            std::cout << count << "x" << array[i] << ' ';
            count = 0;
        }
        count++;
        
    }
    if (array[size - 1] != array[size - 2]) {
        std::cout << 1 << "x" << array[size - 1] << " ";
    }
    
   
}
//zad5
char toUpper(char el) {
    return el - 'a' + 'A';
}
void CapitalLetter(char n[]){
    if (!n) {
        return;
    }
    int i = 1;
    n[0]= n[0]- 'a' + 'A';
    while (n[i] != '\0'){
        if (n[i] != ' ' && n[i - 1] == ' ') {
            n[i] = toUpper(n[i]);
        }
        i++;
       
    }
}

//zad6
void reversed(char ar[], int size) {
    //int len = str_len(ar);
    for (int i = 0;i < size / 2;i++) {
        
        swap_one(ar[i], ar[size - 1 - i]);
    }
}
//zad7
int count_words_prim(char a[]){
    int len = str_len(a);
    int count = 0;
    for (int i = 0;i < len - 1;i++) {
        if (!is_letter(a[i])) {
            if (is_letter(a[i + 1])) {
                count++;
            }
       }
    }
    return count;

}

//zad 8

void word(char text[], char w[], int start, int end) {
    int j = 0;
    for (int i = start; i <= end;i++) {
        w[j++] = text[i];
    }
   
    w[j] = '\0';
    
}
bool same_prim(char text[], char word[], int i, int len) {
 
    for (int j = 0;j < len;j++) {
        if (text[i + j] != word[j]) {
            return 0;
        }
    }
    return 1;
}
bool is_letter(char e) {
    if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z')) {
        return 1;
    }
    return 0;
}
unsigned str_len(char* n) {
    int count = 0;
    while ((*n) != '\0') {
        n++;
        count++;
    }
    return count;
}
void most_frequent_word(char text[]) {
    int len_text = str_len(text);
    int start_indexes[100], end_indexes[100];
    int words[1024];
    int len = 0;
    int count_words = 0;
    int count_words_prim = 0;
    int start_idx = 0;
    int end_idx = 0;
    int counts[100];
    char w[100];
    bool is_started = false;
    for (int i = 0;i < len_text;i++) {
        if ((is_letter(text[i]) && i == 0) || ((!is_letter(text[i-1])) && is_letter(text[i]))) {
            //start_idx = i;
            start_indexes[count_words++] = i;
            is_started = true;
            
        }
        if ((is_started)&&(is_letter(text[i]) && i == len_text-1) || ((is_letter(text[i-1])) && (!is_letter(text[i])))) {
            
            end_indexes[count_words_prim++] = i-1;
            is_started = false;
        }
        
            
        }
      
        int max = 0;
        int max_idx = 0;
        for(int i=0;i<count_words;i++){
        
            start_idx = start_indexes[i];
            end_idx = end_indexes[i];
            
            word(text, w, start_idx, end_idx);
            
         
            int k=0;
            int count1 = 0;
            
            for(int l=0;l<=len_text- end_idx+start_idx;l++){
                if(same_prim(text, w, l,end_idx-start_idx+1))
                {

                    count1++;
                }
                
            }
            if(max<count1){
                max = count1;
                max_idx = i;
            }
           count1 = 0;
            
        }
        
        for(int i=start_indexes[max_idx];i<=end_indexes[max_idx];i++){
            std::cout<<text[i];
        }
     

    }

//zad 9
bool one_left(int indexes[], int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(indexes[i] != 0){
            count++;
        }
    }
    return(count == 1);
}
void print_smallest_word(int start_indexes[], char text[], int min_idx)
{
            int i=start_indexes[min_idx];
            while(is_letter(text[i])){
                std::cout<<text[i];
                i++;
            }
        }
int minimal_idx(int ascii[], int size){
    int min = 128;
    int min_idx = 0;
    for(int i=0;i<size;i++){
        if((ascii[i] < min) && (ascii[i]!= 0)){
            min_idx = i;
            min = ascii[i];
        }
    }
    return min_idx;
}
void min_update(int ascii_values[], int min, int min_idx, int count_words){
    for(int i=0;i<count_words;i++){
            if(min > ascii_values[i] && (ascii_values[i] != 0)){
                min = ascii_values[i];
                min_idx = i;
                
            }
        }
        for(int i=0;i<count_words;i++){
            if(min < ascii_values[i]){
             ascii_values[i] = 0;}
        }
}

void lexigograph(char text[]) {
    int len_text = str_len(text);
    int start_indexes[100], end_indexes[100];
    int words[ARRAY_SIZE];
    int len = 0;
    int count_words = 0;
    int counts[ARRAY_SIZE];
    int ascii_values[ARRAY_SIZE];
    char w[ARRAY_SIZE];
    for (int i = 0;i < len_text;i++) {
        if ((is_letter(text[i]) && i == 0) || ((!is_letter(text[i-1])) && is_letter(text[i]))) {
            
            start_indexes[count_words] = i;
            ascii_values[count_words] =  int(text[i]);
            count_words++;
            
        }
        
        }
        
        int min = ascii_values[0];
        int min_idx = 0;
        for(int i=1;i<count_words;i++){
            if(min > ascii_values[i]){
                min = ascii_values[i];
                min_idx = i;
                
            }
        }
        for(int i=0;i<count_words;i++){
            if(min != ascii_values[i]){
             ascii_values[i] = 0;}
        }
        
        
        
        int move = 1;
        
        while(!one_left(ascii_values, count_words)){
        int min = 128;
        
            
        
        for(int i=0;i<count_words;i++){
            if(ascii_values[i] !=0){
                if(is_letter(text[start_indexes[i] + move])){
                ascii_values[i] = int(text[start_indexes[i] + move]);
                
                
                }
                else{
                    ascii_values[i] = -1;
                }
            }
           
        
            
        }
        
        move++;
        min_update(ascii_values, min, min_idx, count_words);
        
        // for(int i=0;i<count_words;i++){
        //     std::cout<<ascii_values[i]<<" ";
            
        // }
        // std::cout<<'\n';
        min_idx = minimal_idx(ascii_values, count_words);
        
        
        }
        print_smallest_word(start_indexes, text, min_idx);
        
}

void toLower(char text[], int len){
    for(int i=0;i<len;i++){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] - 'A' + 'a';
        }
    }
   
}
