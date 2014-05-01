import math

right = 1
down = 2
left = 3
up = 4

class Spiral(object):
    def __init__(self, n):
        assert n % 2 == 1, "n must be odd"

        self.size = n
        self.final = n * n
        self.center = n / 2
        self.matrix = [0] * self.final

        self.fill()

    def fill(self):
        self.y = self.x = self.center
        self.direction = up
        self.value = 1
        self.step = 0
        self.count = 0

        self.matrix[self.y * self.size + self.x] = self.value

        while self.value <= self.final:
            self.value += 1

            if self.count >= self.step:
                self.count = 0

                if self.direction == right:
                    self.direction = down

                elif self.direction == down:
                    self.direction = left
                    self.step += 1

                elif self.direction == left:
                    self.direction = up

                elif self.direction == up:
                    self.direction = right
                    self.step += 1

            self.count += 1

            if self.direction == right:
                self.x += 1

            elif self.direction == down:
                self.y += 1

            elif self.direction == left:
                self.x -= 1

            elif self.direction == up:
                self.y -= 1

            self.matrix[self.y * self.size + self.x] = self.value

    def diagonal(self):
        x = 0
        y1 = 0
        y2 = self.size - 1
        total = 0

        while x < self.size:
            v1 = self.matrix[y1 * self.size + x]
            v2 = self.matrix[y2 * self.size + x]

            total += v1
            if v2 != v1:
                total += v2

            x += 1
            y1 += 1
            y2 -= 1

        return total

    def __repr__(self):
        spec = ' {{0:>{0}}}'.format(int(math.log(self.final, 10) + 1))
        n = self.size
        value = ''

        for i in range(n):
            for k in self.matrix[i*n : i*n + n]:
                value += spec.format(k)
            value += '\n'

        return value


n = 1001
spiral = Spiral(n)

if n < 20:
    print "\n"
    print spiral

print spiral.diagonal()
