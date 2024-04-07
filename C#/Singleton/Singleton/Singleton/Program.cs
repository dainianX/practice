namespace Singleton
{
    //饿汉式（Eager Initialization）
    //在这种方法中，实例在类加载时就被创建。
    public class Singleton
    {
        private static readonly Singleton instance = new Singleton();

        // 私有构造函数，防止类被实例化
        private Singleton() { }

        public static Singleton Instance
        {
            get { return instance; }
        }
    }
    // 懒汉式（Lazy Initialization）
    // 在这种方法中，实例在第一次访问时才被创建。
    public class Singleton
    {
        private static Singleton instance;
    
        // 私有构造函数，防止类被实例化
        private Singleton() { }
    
        public static Singleton Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new Singleton();
                }
                return instance;
            }
        }
    }

}