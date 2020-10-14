
#include <bits/stdc++.h> 
using namespace std; 

class NumberOfIslands 
{ 
	
	vector<int> rank, parent; 
	int n; 
	
	public: 
	NumberOfIslands(int n) 
	{ 
		rank.resize(n); 
		parent.resize(n); 
		this->n = n; 
		makeParentSet(); 
	} 

	void makeParentSet() 
	{ 
		//Initially each element is its parent	
		for (int i = 0; i < n; i++) 
			parent[i] = i; 
	} 

	int find(int x) 
	{ 
		if (parent[x] != x) 
		{ 
			return find(parent[x]); 
		} 

		return x; 
	} 

	
	void Union(int x, int y) 
	{ 
		int xRootParent = find(x); 
		int yRootParent = find(y); 

		if (xRootParent == yRootParent) 
			return; 

		if (rank[xRootParent] < rank[yRootParent]) 
			parent[xRootParent] = yRootParent; 

		
		else if (rank[yRootParent] < rank[xRootParent]) 
			parent[yRootParent] = xRootParent; 

		else 
		{ 
			parent[yRootParent] = xRootParent; 

			rank[xRootParent] = rank[xRootParent] + 1; 
		} 
	} 
}; 

int countIslands(vector<vector<int>>a) 
{ 
	int n = a.size(); 
	int m = a[0].size(); 

	NumberOfIslands *nislands = new NumberOfIslands(n * m); 

	for (int j = 0; j < n; j++) 
	{ 
		for (int k = 0; k < m; k++) 
		{ 
			if (a[j][k] == 0) 
				continue; 

			if (j + 1 < n && a[j + 1][k] == 1) 
				nislands->Union(j * (m) + k, 
						(j + 1) * (m) + k); 
			if (j - 1 >= 0 && a[j - 1][k] == 1) 
				nislands->Union(j * (m) + k, 
						(j - 1) * (m) + k); 
			if (k + 1 < m && a[j][k + 1] == 1) 
				nislands->Union(j * (m) + k, 
						(j) * (m) + k + 1); 
			if (k - 1 >= 0 && a[j][k - 1] == 1) 
				nislands->Union(j * (m) + k, 
						(j) * (m) + k - 1); 
			if (j + 1 < n && k + 1 < m && 
					a[j + 1][k + 1] == 1) 
				nislands->Union(j * (m) + k, 
						(j + 1) * (m) + k + 1); 
			if (j + 1 < n && k - 1 >= 0 && 
					a[j + 1][k - 1] == 1) 
				nislands->Union(j * m + k, 
						(j + 1) * (m) + k - 1); 
			if (j - 1 >= 0 && k + 1 < m && 
					a[j - 1][k + 1] == 1) 
				nislands->Union(j * m + k, 
						(j - 1) * m + k + 1); 
			if (j - 1 >= 0 && k - 1 >= 0 && 
					a[j - 1][k - 1] == 1) 
				nislands->Union(j * m + k, 
						(j - 1) * m + k - 1); 
		} 
	} 

	int *c = new int[n * m]; 
	int numberOfIslands = 0; 
	for (int j = 0; j < n; j++) 
	{ 
		for (int k = 0; k < m; k++) 
		{ 
			if (a[j][k] == 1) 
			{ 
				int x = nislands->find(j * m + k); 

				if (c[x] == 0) 
				{ 
					numberOfIslands++; 
					c[x]++; 
				} 

				else
					c[x]++; 
			} 
		} 
	} 
	return numberOfIslands; 
} 

int main() 
{ 
	int n, k;
	vector<vector<int>> a;
	
	cout << "Enter the number of rows: ";
	cin >> n;
	
	cout << "Enter the elements row wise: "<<endl;
	for (int i=0;i<n;i++){
		vector<int> b;
		for(int j=0;j<n;j++){
			cin >> k;
			b.push_back(k);
		}
		a.push_back(b);
	}
	
	
	
	cout << "Number of islands present : "
		<< countIslands(a) << endl; 
	
	return 0;
}
