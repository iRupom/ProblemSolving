#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return {};
        vector<vector<int>> result;
        queue<TreeNode*> Q;
        while (!Q.empty()) {
            int count = Q.size();
            vector<int> lebalNodes;
            for (int i = 0; i < count; i++) {
                TreeNode* node = Q.front();
                Q.pop();
                if (node->left) Q.push(node->left);
                if (node->right) Q.push(node->right);
                lebalNodes.push_back(node->val);
            }

            result.push_back(lebalNodes);
        }

        return result;
    }

};

int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("lci.txt", "r", stdin);
    freopen("lco.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }


    return 0;
}