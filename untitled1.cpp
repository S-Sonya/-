```
#include <iostream>
#include <iomanip> 

using namespace std;

void showMenu() {
	cout << "选择运算类型：" << endl;
	cout << "1. 加法" << endl;
	cout << "2. 减法" << endl;
	cout << "3. 乘法" << endl;
	cout << "4. 除法" << endl;
	cout << "5. 退出" << endl;
}

double add(double a, double b) {

return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	if (b == 0) {
		throw runtime_error("除数不能为零！");
	}
	return a / b;
}

int main() {
	int choice;
	double num1, num2, result;
	



while (true) {
	showMenu();
	cout << "请输入你的选择（1-5）：";
	cin >> choice;
	
	if (choice == 5) {
		cout << "退出程序。谢谢使用！" << endl;
		break;
	}
	
	if (choice < 1 || choice > 5) {
		cout << "无效的选择，请重新输入。" << endl;
		continue;
	}
	
	cout << "请输入第一个数字：";
	cin >> num1;
	cout << "请输入第二个数字：";
	cin >> num2;
	
	try {
		switch (choice) {
		case 1:
			result = add(num1, num2);
			cout << "结果：" << fixed << setprecision(2) << result << endl;
			break;
		case 2:
			result = subtract(num1, num2);
			cout << "结果：" << fixed << setprecision(2) << result << endl;
			break;
		case 3:
			result = multiply(num1, num2);
			cout << "结果：" << fixed << setprecision(2) << result << endl;
			break;
		case 4:
			result = divide(num1, num2);
			cout << "结果：" << fixed << setprecision(2) << result << endl;
			break;
		default:
			cout << "选择无效，请重新输入。" << endl;
			break;
		}
	} catch (const runtime_error& e) {
		cout << "错误: " << e.what() << endl;
	}
}

return 0;

}
```


