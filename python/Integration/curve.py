from manim import *

class IntegrationCurve(Scene):
	def construct(self):

		ax = Axes(
			x_range = [-10, 10, 1],
			y_range = [-10, 10, 1],
			x_length = 12,
			y_length = 12
			)

		self.play(Create(ax))
		self.wait(4)