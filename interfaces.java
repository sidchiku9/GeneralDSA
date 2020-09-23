interface calculate
    {
        void cal(int item);
    }
    class display implements calculate
    {
        int x;
        public void cal(int item)
        {
            x = item * item;            
        }
    }
    class interfaces
    {
        public static void main(String args[])
        {
            display a = new display();
            a.x = 0;  
           a.cal(2);
            System.out.print(a.x);
        }
    }