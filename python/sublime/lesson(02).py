import qrcode

qr = qrcode.QRCode(version=1, error_correction=qrcode.constants.ERROR_CORRECT_H, border=4)

data = "I LOVE YOU PRANJAL"

qr.add_data(data)
qr.make(fit=True)
	
img = qr.make_image(fill_color="red", back_color="black")

img.save("lesson(02).png")