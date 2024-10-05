from manim import *

class FirstText(Scene):
	def construct(self):

		text = MathTex(r"y= \frac{8a^3}{x^2+4a^3}", font_size=45)
		self.play(Write(text))
		self.wait()

		transform_text = MathTex(r"y= \frac{8a^3}{x^2+4a^3}", font_size=40, color=BLUE)
		transform_text.to_corner(UP+LEFT)

		self.play(Transform(text, transform_text))
		self.wait()



		text_1 = Text("(To plot a Graph on Cartesian Plan, let's put a = 2)", font_size=28)
		text_1.next_to(transform_text, RIGHT+DOWN)
		self.play(Write(text_1))
		self.wait(2)
		self.remove(text_1)
		self.wait(1)




		arrow =	MathTex(r"\xrightarrow{....a = 2....}", font_size=50)
		arrow.next_to(transform_text)

		self.play(Write(arrow))
		self.wait()




		text_2 = MathTex(r"y= \frac{8*2*2*2}{x^2+4*2*2}")
		self.play(Write(text_2))
		self.wait()		
		
		transform_text_2 = MathTex(r"y= \frac{64}{x^2+32}", font_size=40, color=RED)
		transform_text_2.to_corner(UP+LEFT)
		transform_text_2.next_to(arrow)

		self.play(Transform(text_2, transform_text_2))
		self.wait()
		



		text_3 = Text("1. Symmetry:", font_size=30)
		text_3.next_to(transform_text, DOWN)
		self.play(Write(text_3))
		self.wait()
		text_4 = Text("Condition:- If x is repace by -x and equation is unchanged then graph is symmetric about y axis.", font_size=28)
		text_4.next_to(text_3, DOWN+RIGHT)
		self.play(Write(text_4))
		self.wait(2)
		self.remove(text_4)
		self.wait(1)
		text_5 = Text("Graph is symetric about x Axis.")
		self.play(Write(text_5))
		self.remove(text_3)
		self.wait(1)


		axes = Axes(
            x_range = [-10, 11, 1],
            y_range = [-10,11, 1],
            x_length=12,
            y_length=12,
            axis_config={"color": BLUE},
            x_axis_config={"color": RED}
            )
		axes.next_to(text_3, DOWN)
		self.play(Write(axes))
		self.wait(5)