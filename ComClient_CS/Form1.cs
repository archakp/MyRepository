using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using ComServerLib;

namespace ComClient_CS
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            ComServerLib.Math pMath = new ComServerLib.Math();

            pMath.Add(5, 4);

        }
    }
}
