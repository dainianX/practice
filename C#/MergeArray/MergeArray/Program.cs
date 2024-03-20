int[] Merge(int[] a1, int[] a2) {
	int[] a3 = new int[a1.Length + a2.Length];
	for (int i = 0; i < a1.Length; i++)
	{
		a3[i] = a1[i];
	}
	for (int j = 0; j < a2.Length; j++)
	{
		a3[j + a1.Length] = a2[j];
	}
	Array.Sort(a3);
	return a3;
}

//int[] a1 = { 1, 4, 7, 12, 20 };
//int[] a2 = {10,15,17,33};
//int[] a1 = { 2,3,5,7 };
//int[] a2 = {11,13,17};
//int[] a1 = { 2,3,5,7,11 };
//int[] a2 = {7,11,13,17};
int[] a1 = { 1, 2, 3 };
int[] a2 = { };

int[] a3 = Merge(a1, a2);
foreach (int i in a3) {
	Console.Write(i + "  ");
}