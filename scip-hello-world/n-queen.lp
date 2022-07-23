maximize
a1 + a2 + a3 + a4 + b1 + b2 + b3 + b4 + c1 + c2 + c3 + c4 + d1 + d2 + d3 + d4

subject to
rowA: a1 + a2 + a3 + a4 = 1
rowB: b1 + b2 + b3 + b4 = 1
rowC: c1 + c2 + c3 + c4 = 1
rowD: d1 + d2 + d3 + d4 = 1
col1: a1 + b1 + c1 + d1 = 1
col2: a2 + b2 + c2 + d2 = 1
col3: a3 + b3 + c3 + d3 = 1
col4: a4 + b4 + c4 + d4 = 1
diagC1D2: c1 + d2 <= 1
diagB1D3: b1 + c2 + d3 <= 1
diagA1D4: a1 + b2 + c3 + d4 <= 1
diagA2C4: a2 + b3 + c4 <= 1
diagA3B4: a3 + b4 <= 1
diagC4D3: c4 + d3 <= 1
diagB4D2: b4 + c3 + d2 <= 1
diagA4D1: a4 + b3 + c2 + d1 <= 1
diagA3C1: a3 + b2 + c1 <= 1
diagA2B1: a2 + c1 <= 1

binary
a1 a2 a3 a4 b1 b2 b3 b4 c1 c2 c3 c4 d1 d2 d3 d4

