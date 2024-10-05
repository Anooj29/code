from manim import *
class Paragraph(Scene):
	def constuct(self):
		paragraph = Paragraph("this is awesome\n why \n beacuse")

		self.play(Write(paragraph))
		self.wait(4)