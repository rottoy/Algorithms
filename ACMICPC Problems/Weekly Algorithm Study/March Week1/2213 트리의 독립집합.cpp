/*
2213Ʈ���� ��������
�ٽ� : ���������� �����ϴ� ������ "dp��������" ã�� �� �� ����.
�� ������, �̹� dp���� index�� �����ߴ��� �ȼ����ߴ����� ���� ������ ����ֱ� ����.
������ �̷�� dp���� index�� �����ϸ�, dp0�� ������ �Ǿ��ٸ� �� ��带 ���Խ�Ű���ʰ�,
dp1�� ���õǾ��ٸ� �� ��带 �������տ� ���Խ�Ų��.
�������� ���������� ������������ �����Ѵ�.
*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v[10001];
int A[10001];
int dp[10001][2];
bool dpa[10001];
bool visited[10001];
vector<int >ans;
int max(int a, int b) { return a > b ? a : b; }
int dfs(int a) {
	visited[a] = true;
	if (dpa[a]) return max(dp[a][0], dp[a][1]); //visited�� �ϸ� ���׹߻��ؼ� ���� ���ο� check ���� ����.
	bool isp = false; //���� ��� : isp�� false, �߰� ��� : isp�� true�� ��.
	for (int i = 0; i < v[a].size(); i++) {
		int to = v[a][i];
		if (visited[to] == false) {
			dfs(to);
			isp = true; // �ϳ��� �湮�� �����ִٸ� true�� ����
			dp[a][0] += max(dp[to][0], dp[to][1]); // �湮 ��带 ���� '��'�� ��쿡�� �ڽ� dp���� 0,1�� ū���� ����.
			dp[a][1] += dp[to][0]; // �湮 ��带 ������ ��쿡�� �ڽ� ��尡 ���õ��� ���ϹǷ� dp 0 ��.
		}
	}
	dp[a][1] += A[a]; //���� ��带 ������ ��쿡�� �ڽ� ����ġ�� ������.
	dpa[a] = true;
	if (isp) return max(dp[a][0], dp[a][1]);

	//���� ����� ��츸 �� �� ����.
	dp[a][0] = 0;  //�����ε� �ڽ��� ���� ���� ���� 0
	dp[a][1] = A[a];//�����ε� �ڽ��� ������ ���� �ڽ��� ����ġ
	return  dp[a][1];//���߿� ū���� �׻� dp[a][1]�̹Ƿ� �� ���� return. ������max(dp[a][0],dp[a][1])�� ����.
}
void trace(int now, int prev ,int included) {//���� ���, ���� ���, ���� ��尡 ���ԵǾ� �ִ°�?
	if (included) {//�����尡 ���ԵǾ��ִٸ�
		ans.push_back(now);//�������տ� �߰��Ѵ�.
		for (int i = 0; i < v[now].size(); i++) {
			int to = v[now][i];
			if (to == prev)continue;//�湮�� �������� ������尡 ���ٸ� �߸� ���� ���̹Ƿ� ����ó��
			trace(to, now, 0); //���簡 to�� �ǰ� ������ now�� ��. ���縦 ���������Ƿ� included�� 0.
		}
	}
	else { // �����尡 ���ԵǾ����������� �������� �߰� x
		for (int i = 0; i < v[now].size(); i++) {
			int to = v[now][i];
			if (to == prev)continue;

			if (dp[to][0] > dp[to][1]) //���� ��尡 0�� �� ũ�ٸ�.
				trace(to, now, 0); //0���� ��� ȣ��
			else
				trace(to, now, 1); //1�� ��� ȣ��.
		}
	}

}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	visited[1] = true;
	cout << dfs(1) << "\n";
	if (dp[1][0] > dp[1][1]) trace(1, -1, 0);
	else trace(1, -1, 1);
	sort(ans.begin(), ans.end()); //�������� �������� ����
	for (int i = 0; i < ans.size(); i++)cout << ans[i] << " ";

	return 0;
}*/