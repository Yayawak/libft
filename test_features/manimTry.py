# from manim import *
from manim import Scene, FadeIn, Dot, WHITE


class Ex(Scene):
    def construct(self):
        self.play(
            FadeIn(
                Dot(radius=4, color=WHITE)
            )
        )
        self.wait(3)
