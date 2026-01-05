import matplotlib.pyplot as plt
import matplotlib.patches as patches

fig, ax = plt.subplots(figsize=(10, 6))

# Drawing AC Refrigeration System
ac_refrigeration = patches.FancyBboxPatch((0.1, 0.5), 0.8, 0.4, boxstyle="round,pad=0.1", edgecolor='blue', facecolor='none', linewidth=1.5)
ax.add_patch(ac_refrigeration)
ax.text(0.5, 0.9, 'AC Refrigeration System', horizontalalignment='center', verticalalignment='center', fontsize=14, color='blue')

# Drawing components
components = {
    "Evaporator": (0.15, 0.75),
    "Compressor": (0.85, 0.75),
    "Condenser": (0.85, 0.55),
    "Expansion Valve": (0.15, 0.55)
}

for comp, pos in components.items():
    ax.add_patch(patches.FancyBboxPatch((pos[0] - 0.05, pos[1] - 0.03), 0.1, 0.06, boxstyle="round,pad=0.1", edgecolor='black', facecolor='lightgray', linewidth=1.5))
    ax.text(pos[0], pos[1], comp, horizontalalignment='center', verticalalignment='center', fontsize=10, color='black')

# Drawing arrows for flow direction
arrows = [
    ((0.2, 0.75), (0.8, 0.75)),
    ((0.8, 0.7), (0.8, 0.6)),
    ((0.2, 0.55), (0.8, 0.55)),
    ((0.2, 0.6), (0.2, 0.7))
]

for arrow in arrows:
    ax.annotate('', xy=arrow[1], xytext=arrow[0], arrowprops=dict(arrowstyle='->', color='red'))

ax.set_xlim(0, 1)
ax.set_ylim(0, 1)
ax.axis('off')

plt.title("AC Refrigeration System Diagram", fontsize=16)
plt.show()