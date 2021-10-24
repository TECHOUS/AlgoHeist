#this program is used to calculate Levenshtein Distance or the edit distance of two strings.
def edit_dis(s1: str, s2: str):
	n, m = len(s1), len(s2)

	matrix = [[0 for x in range(n + 1)] for x in range(m + 1)]
	
	for i in range(m + 1):
		for j in range(n + 1):
			if i == 0 or j == 0:
				matrix[i][j] = i+j 
			elif s2[i-1] == s1[j-1]:
				matrix[i][j] = matrix[i-1][j-1]
			else:
				matrix[i][j] = 1 + min(matrix[i][j-1], matrix[i-1][j], matrix[i-1][j-1])
	
	return matrix[m][n]


if __name__ == '__main__':
	s1 = input()             #taking the first String input
	s2 = input()			 #taking the second String input
	print(edit_dis(s1, s2))
