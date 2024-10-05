from manim import *


class CreateCircle(Scene):
    def construct(self):
        circle = Circle(radius=10) 
        circle.set_fill(BLUE, opacity=0.5)  
        self.play(Create(circle)) 