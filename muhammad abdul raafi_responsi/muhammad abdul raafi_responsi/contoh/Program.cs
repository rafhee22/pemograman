//21.11.3867
//muhmmad abdul raafi
//21 if 01
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace contoh
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DosenBase dosen1 = new DosenBase(1, "muhammad abdul raafi", 21113833, "Laki-laki",
           "Pemrograman");
            dosen1.cetakHasil();
            Console.WriteLine();
            dosen1.addDosen();
            dosen1.addCourse();
            Console.WriteLine();
            dosen1.cetakAkhir();
            Console.ReadKey();
        }
    }
}
