#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;

char preOrd[60];
char inOrd[60];
int c, n;
bool isInLeft[256];

string postOrder(string in, string pre) {
	if (pre.size() == 0)
		return "";
	if (pre.size() == 1)
		return pre;

	int root = 0;

	for (int i = 0; i<(int)in.size(); i++)
		if (pre[0] == in[i]) {
			root = i;
			break;
		}

	string leftIn = "", rightIn = "";

	for (int i = 0; i<(int)in.size(); i++)
		if (i<root) leftIn += in[i];
		else
			if (i>root) rightIn += in[i];

	for (int i = 'a'; i <= 'z'; i++)
		isInLeft[(int)i] = false;

	for (int i = 'A'; i <= 'Z'; i++)
		isInLeft[(int)i] = false;

	for (int i = 0; i<(int)leftIn.size(); i++)
		isInLeft[(int)leftIn[i]] = true;

	string leftPre = "", rightPre = "";

	for (int i = 1; i<(int)pre.size(); i++)
		if (isInLeft[(int)pre[i]]) leftPre += pre[i];
		else rightPre += pre[i];

		return postOrder(leftIn, leftPre) + postOrder(rightIn, rightPre) + pre[0];
}

int main() {
	scanf("%d", &c);

	while (c--) {
		scanf("%d %s %s", &n, preOrd, inOrd);
		printf("%s\n", postOrder(inOrd, preOrd).c_str());
	}

	return 0;
}