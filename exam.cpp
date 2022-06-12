// C++ program to implement the
// above approach
#include <bits/stdc++.h>
using namespace std;

// Function to add an edge to the tree
void addEdge(vector<pair<int, int> >& edges,
			list<int>* tree, int x, int y)
{
	edges.push_back({ x, y });
	tree[x].push_back(y);
	tree[y].push_back(x);
}

// Function to run DFS and calculate the
// height of the subtree below it
void dfs(vector<pair<int, int> >& edges, list<int>* tree,
		int node, int parent, int dp[])
{
	// Initially initialize with 1
	dp[node] = 1;

	// Traverse for all nodes connected to node
	for (auto it : tree[node]) {
		// If node is not parent
		// then recall dfs
		if (it != parent) {
			dfs(edges, tree, it, node, dp);

			// Add the size of the
			// subtree beneath it
			dp[node] += dp[it];
		}
	}
}

// Function to assign weights to edges
// to maximize the final sum
int maximizeSum(int a[], vector<pair<int, int> >& edges,
				list<int>* tree, int n)
{

	// Initialize it which stores the
	// height of the subtree beneath it
	int dp[n + 1] = { 0 };

	// Call the DFS function to
	dfs(edges, tree, 1, 0, dp);

	// Sort the given array
	sort(a, a + (n - 1));

	// Stores the number of times an
	// edge is part of a path
	vector<int> ans;

	// Iterate for all edges and find the
	// number of nodes on the left and on the right
	for (auto it : edges) {

		// Node 1
		int x = it.first;

		// Node 2
		int y = it.second;

		// If the number of nodes below is less
		// then the other will be n - dp[node]
		if (dp[x] < dp[y]) {
			int fi = dp[x];
			int sec = n - dp[x];
			ans.push_back(fi * sec);
		}

		// Second condition
		else {
			int fi = dp[y];
			int sec = n - dp[y];
			ans.push_back(fi * sec);
		}
	}

	// Sort the number of times
	// an edges occurs in the path
	sort(ans.begin(), ans.end());
	int res = 0;

	// Find the summation of all those
	// paths and return
	for (int i = 0; i < n - 1; i++) {
		res += ans[i] * a[i];
	}

	return res;
}

// Driver code
int main()
{
	int n = 5;
	vector<pair<int, int> > edges;

	list<int>* tree = new list<int>[n + 1];

	// Add an edge 1-2 in the tree
	addEdge(edges, tree, 1, 2);

	// Add an edge 2-3 in the tree
	addEdge(edges, tree, 1, 3);

	// Add an edge 3-4 in the tree
	addEdge(edges, tree, 3, 4);

	// Add an edge 3-5 in the tree
	addEdge(edges, tree, 3, 5);

	// Array which gives the edges weight
	// to be assigned
	int a[] = { 6, 3, 1, 9, 3 };

	cout << maximizeSum(a, edges, tree, n);
}

