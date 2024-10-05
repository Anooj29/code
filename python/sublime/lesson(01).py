# Making simple QR-Code

import qrcode as qr
URL = "https://www.youtube.com/watch?v=FOGRHBp6lvM&list=PLjVLYmrlmjGfAUdLiF2bQ-0l8SwNZ1sBl"
qr_code = qr.make("URL")
qr_code.save("youtube.png")