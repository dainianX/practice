class Program {
    static void Main(string[] args) {
        while (true) {
            Console.Write("请输入要转换的十进制数：");

            int x = Convert.ToInt32(Console.ReadLine());
            int a = x; // 保存x的值
            string y = "";

            if (x < 0) {
                x = -x;
            }

            if (x == 0) { 
                y = "0";
            }
            
            while (x > 0) {
                int r = x % 8; //余数
                y = r + y; //字符串拼接
                x = x / 8;
            }

            if (a < 0) {
                Console.WriteLine($"对应的八进制数为：-{y}");
            }
            else {
                Console.WriteLine($"对应的八进制数为：{y}");
            }
        }
    }
}