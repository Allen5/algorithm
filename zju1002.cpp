
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	int a[4][4] = { 0 };

	int n;
	while (cin >> n, n != 0) {
		
		//初始化二维数组
		memset(a, 0, sizeof(a));

		//读取信息
		char c = 0;
		int i = 0, j = 0;
		while (c = getchar()) {
			
			if (c == '\n') continue;

			a[i][j++] = (c == 'X' ? 1 : 0);

			if (j == n) { j = 0; i++; }
			if (i == n) break;
		}

		//测试
// 		for (int i = 0; i < n; i++)
// 		{
// 			for (int j = 0; j < n; j++)
// 			{
// 				std::cout << a[i][j];
// 			}
// 			std::cout << endl;
// 		}

	}

	return 0;
}