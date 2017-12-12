using System;
using System.Text;
using System.Runtime.InteropServices;

namespace CSharpWrapperTest
{
    class Program
    {
        [DllImport("CSharpWrapperIF.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Cdecl)]
        public static extern int JoinString(string s1, string s2, StringBuilder result, int size);

        static void Main(string[] args)
        {
            string s1 = "abc", s2 = "123";
            int n = 100;
            StringBuilder res = new StringBuilder(n);
            n = JoinString(s1, s2, res, n);
            System.Console.Out.WriteLine(res.ToString());
        }
    }
}
