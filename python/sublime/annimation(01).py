from manim import *

class IntegralGraph(Scene):
    def construct(self):
        # Define the function to be integrated
        func = lambda x: x**2
        
        # Define the limits of integration
        a = 0
        b = 2
        
        # Create axes
        axes = Axes(
            x_range=[-0.5, 2.5, 0.5],
            y_range=[-0.5, 4, 0.5],
            axis_config={"color": BLUE},
        )
        axes_labels = axes.get_axis_labels(x_label="x", y_label="y")

        # Plot the function
        graph = axes.get_graph(func, color=WHITE)

        # Add the integral area
        area = axes.get_area(graph, x_range=[a, b], color=BLUE, opacity=0.5)
        area_label = MathTex("\\int_{{{}^{{}}}}^{{{}^{{}}}} f(x)dx".format(a, b)).move_to(area)

        # Create animation
        self.play(Create(axes), Write(axes_labels))
        self.play(Create(graph))
        self.play(Create(area), Write(area_label))
        self.wait(2)
        