# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for k in range(1, 11):

    test_data = IO(file_prefix="", data_id=k)

    r = uniform(1, 1000)
    test_data.input_writeln(r)

    test_data.output_gen("demo.exe")