from manim import *
from numpy import array

class FirstText(Scene):
	def construct(self):
		frame_width()
		frame_height = 20


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

		self.play(Create(arrow))
		self.wait()




		text_2 = MathTex(r"y= \frac{8*2*2*2}{x^2+4*2*2}")
		self.play(Write(text_2))
		self.wait()		
		
		transform_text_2 = MathTex(r"y= \frac{64}{x^2+16}", font_size=40, color=RED)
		transform_text_2.to_corner(UP+LEFT)
		transform_text_2.next_to(arrow)

		self.play(Transform(text_2, transform_text_2))
		self.wait()
		



		text_3 = Text("1. Symmetry:", font_size=36)
		text_3.next_to(arrow, DOWN-3)
		self.play(Write(text_3))
		self.wait()


		text_4 = Text("Condition:-", font_size=28)
		text_5 = Text(" If x is replace by -x and equation is unchanged then, the graph is symmetric about y axis.", font_size=28)
		text_4.next_to(text_3, DOWN)
		text_5.next_to(text_4, DOWN+RIGHT)

		text_6 = MathTex(r"y= \frac{64}{(-x)^2+16}", font_size=40)
		text_6.next_to(text_5, DOWN)
		text_7 = MathTex(r" = \frac{64}{x^2+16}", font_size=40)
		text_7.next_to(text_6,DOWN)

		text_8 = Text("Hence, The graph is symmetric about x-axis", font_size=50)
		text_8.next_to(text_7,DOWN)

		ax = Axes(
            x_range=[-7, 8, 1],
            y_range=[-7, 8, 1],
            ).next_to(text_8, DOWN)
		line = Line(start=array([2.3, -9, 0]), end=array([2.3, -4, 0]), color=GREEN, stroke_width=8)

		self.play(Write(text_4), Write(text_5), Write(text_6), Write(text_7), Write(text_8))
		self.wait()

		self.play(Create(ax), Create(line, run_time=3))
		self.wait()
		self.remove((text_3), (text_4), (text_5), (text_6), (text_7), (text_8))
		self.wait(1)


		text_9 = Text("2. Point Of Intersection:", font_size=36)
		text_9.next_to(transform_text_2, DOWN-3)
		self.play(Write(text_9))
		self.wait()

		text_10 = Text("Put (x = 0)", font_size=28)
		text_10.next_to(text_9, RIGHT+DOWN)
		text_11 =  MathTex(r"y= \frac{64}{(0)^2+16}", font_size=40)
		text_11.next_to(text_10, DOWN)
		text_12 =  MathTex(r"y= 4", font_size=50)
		text_12.next_to(text_11, DOWN)
		text_13 = Text("First point of intersection is (0, 4)", font_size=40, line_spacing=100)
		text_13.next_to(text_12, DOWN)
		
		self.play(Write(text_10), Write(text_11), Write(text_12), Write(text_13))
		self.wait(2)
		self.remove((text_10), (text_11), (text_12), (text_13))



		text_14 = Text("(0,4)", font_size=40)
		text_14.next_to(text_9)
		self.play(Write(text_14))
		self.wait(1)


		text_15 = Text("Put (y = 0)", font_size=28)
		text_15.next_to(text_9, RIGHT+DOWN)
		text_16 =  MathTex(r"0= \frac{64}{(x)^2+16}", font_size=40)
		text_16.next_to(text_15, DOWN)
		text_17 =  MathTex(r"0 * {((x)^2+16)} = 64", font_size=50)
		text_17.next_to(text_16, DOWN)
		text_18 =  MathTex(r"0  = 64", font_size=50)
		text_18.next_to(text_17, DOWN)
		text_19 = Text("Point of intersection at (y=0), Not Exist", font_size=40, line_spacing=100)
		text_19.next_to(text_18, DOWN)

		point = Dot().move_to(ax.coords_to_point(0, 4))
		label = MathTex("(0, 4)").next_to(point, UP+ RIGHT)
		
		self.play(Write(text_15), Write(text_16), Write(text_17), Write(text_18), Write(text_19))
		self.play(Create(point))
		self.play(Write(label))
		self.wait(2)
		self.remove((text_15), (text_16), (text_17), (text_18), (text_19))
		self.wait(1)

		self.remove((text_9), (text_14))
		self.wait(1)



		text_20 = Text("3. Tangent:", font_size=36)
		text_20.next_to(arrow, DOWN-3)
		self.play(Write(text_20))
		self.wait()

		text_21 = Text("Tangent at  point (0,4)", font_size=28).next_to(text_20)
		self.play(Write(text_21))

		text_22 = MathTex(r"\frac{\mathrm{d} y}{\mathrm{d} x} = 64 [\frac{\mathrm{-2}}{\mathrm{x^2+16}}] 2x = \frac{\mathrm{-256 x}}{\mathrm{x^2+16}}", font_size=50).next_to(text_21, DOWN)
		self.play(Write(text_22))
		
		text_23 = Text("Puting x = 0", font_size=36).next_to(text_22, DOWN)
		self.play(Write(text_23))
		self.wait(3)
		

		text_24 = MathTex(r"\frac{\mathrm{d} y}{\mathrm{d} x} = 0", font_size=50).next_to(text_23, DOWN)
		self.play(Create(text_24))
		self.wait(1)

		text_25 = Text("Hence, Tangent is parallel to x-axis at (0,4)", font_size=40).next_to(text_24, DOWN)
		self.play(Write(text_25))
		self.wait(1)

		line_1 = Line(start=array([-4., -5., 0.]), end=array([9.5, -5., 0.]), color=RED)
		self.play(Create(line_1))
		self.wait()

		self.remove((text_20),(text_21), (text_22), (text_23), (text_24), (text_25))
		self.wait(1)

		text_26 = Text("4. Assymptote:", font_size=36)
		text_26.next_to(arrow, DOWN-3)
		self.play(Write(text_26))
		self.wait()


		text_27 = Text("Across y" , font_size=28).next_to(text_26)
		self.play(Write(text_27))
		text_28 = MathTex(r"{(x)^2+4a^2}=0", font_sixe=28).next_to(text_27, DOWN)
		self.play(Write(text_28))
		text_29 =MathTex(r"{(x)^2=-4a^2}", font_sixe=28).next_to(text_27, DOWN)
		self.play(Write(text_29))
		text_30 = Text("Not Possible").next_to(text_29, DOWN)
		self.play(Write(text_30))
		self.wait(1)

		self.remove((text_26), (text_27), (text_28), (text_29), (text_30))
		self.wait(1)



		text_31 = Text("Across x" , font_size=28).next_to(text_26)
		self.play(Write(text_31))
		text_32 = MathTex(r"{y(x)^2}=0", font_sixe=28).next_to(text_31, DOWN)
		self.play(Write(text_32))
		text_33 =MathTex(r"y=0", font_sixe=28).next_to(text_32, DOWN)
		self.play(Write(text_33))
		text_34 = Text("Due to y = 0, Assymptote is parallel to x-axis").next_to(text_33, DOWN)
		self.play(Write(text_34))
		self.wait(1)

		line_2 = Line(stary=array([-4., -7., 0.]), end=array([-5., -7., 0.]), color=BLUE)
		line_3 = Line(stary=array([-4., -9., 0.]), end=array([-5., -9., 0.]), color=BLUE)
		line_4 = Line(stary=array([-8.5, -7., 0.]), end=array([9.5, -7., 0.]), color=BLUE)
		line_5 = Line(stary=array([-8.5, -9., 0.]), end=array([9.5, -9., 0.]), color=BLUE)

		self.play(Create(line_2), Create(line_3), Create(line_4), Create(line_5))
		self.wait(1)

		self.remove((text_31), (text_32), (text_33), (text_34), (text_26))
		self.wait(1)


		text_35 = Text("5. Region Of Absence:", font_size=36)
		text_35.next_to(arrow, DOWN-3)
		self.play(Write(text_35))
		self.wait()

		text_36 = Text("The region of curve is:", font_size=32).next_to(text_35)
		text_37 = Text("y>0").next_to(text_36, DOWN)
		text_38 = Text("y<2a", font_size=32).next_to(text_37, DOWN)

		self.play(Write(text_36), Write(text_37), Write(text_38))
		self.wait()


		curve = ax.plot(lambda x: 64/(x*x+16), color=RED)
		area = ax.get_area(curve, x_range=(-7, 8), color=BLUE)
		self.play(Create(curve, run_time=5), Create(area, run_time=5))
		self.wait(10)




		# point = Dot().move_to(ax.coords_to_point(0,4))
		# label = MathTex("(0,4)", font_size=36).next_to(point, UP + RIGHT)
		# curve = ax.plot(lambda x: 64/(x*x+16), color=RED)
		# area = ax.get_area(curve, x_range=(-7, 8), color=BLUE)
		# #self.play(Create(ax, run_time=5)) 
		# #self.play(Create(point))
		# #self.play(Write(label))
		
		# self.wait()

