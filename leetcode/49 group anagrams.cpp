	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> mp;
		for (int i = 0; i < strs.size(); i++) {
			string key = getKey(strs[i]);
			mp[key].push_back(strs[i]);
		}

		vector<vector<string>> answer;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			answer.push_back(it->second);
		}

		return answer;
	}
private:
	string getKey(string str) {
		vector<int> count(26, 0);
		for (int i = 0; i < str.size(); i++) {
			count[str[i] - 'a']++;
		}
		string key = "";
		for (int i = 0; i < 26; i++) {
			key.append(to_string(count[i] + 'a'));
		}

		return key;
	}
