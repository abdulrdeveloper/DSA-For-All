# DSA — Data Structures & Algorithms Practice (TypeScript)

> A focused TypeScript workspace for learning data structures and algorithms through
> small, readable solutions and deliberate complexity analysis.

[![TypeScript](https://img.shields.io/badge/-TypeScript-3178C6?logo=typescript&logoColor=white)](https://www.typescriptlang.org)
[![Node.js](https://img.shields.io/badge/-Node.js-339933?logo=node.js&logoColor=white)](https://nodejs.org)
[![pnpm](https://img.shields.io/badge/-pnpm-F69220?logo=pnpm&logoColor=white)](https://pnpm.io)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Type-checking](#type-checking)
  - [Running a solution](#running-a-solution)
- [Project Structure](#project-structure)
- [Practice Conventions](#practice-conventions)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)

---

## About

This repository is a personal, structured approach to mastering **data structures and
algorithms**. Every problem is solved in **TypeScript**, kept as **one problem per file**,
and paired with a note on its **time and space complexity** so patterns become intuitive
over time.

It focuses on the classic "must-know" problems across arrays, strings, linked lists,
trees, graphs, dynamic programming, and more — building up from foundational to advanced
topics.

## Features

- ✍️ **TypeScript throughout** — strict compiler settings for type-safe practice.
- 🗂️ **Topic-based organization** — solutions are grouped by subject for quick revision.
- 📏 **Complexity-first thinking** — each solution is paired with time and space analysis.
- 📘 **Supporting notes** — complexity references and reusable problem-solving patterns live
  alongside the code.
- 🧰 **Minimal setup** — no application framework or runtime dependency is required.

## Getting Started

### Prerequisites

- [Node.js](https://nodejs.org) **v18 or later**
- [pnpm](https://pnpm.io) **v8 or later**

### Installation

```bash
# 1. Clone the repository
git clone https://github.com/<your-user>/DSA.git
cd DSA

# 2. Install dependencies
pnpm install
```

### Type-checking and building

```bash
# Type-check the whole project without emitting files
pnpm exec tsc --noEmit

# Compile JavaScript and declaration files to ./dist
pnpm exec tsc
```

### Running a solution

Compile the project first, then run the generated JavaScript with Node.js:

```bash
pnpm exec tsc
node dist/arrays/two-sum.js
```

The solution files are intentionally small and can also be read independently while
practicing the underlying pattern.

## Project Structure

```
DSA
├── typescript/            # All solutions live here
│   └── arrays/            # One category per folder
├── COMPLEXITY.md          # Big-O reference & quick rules
├── PATTERNS.md            # Reusable problem-solving patterns
├── tsconfig.json          # Strict TypeScript configuration
├── package.json           # @types/node dev dependency
├── LICENSE                # MIT license
└── README.md
```

## Practice Conventions

To keep the repo clean and revision-friendly:

- **One problem per file**, named after the problem (kebab-case).
- Add a **time and space complexity** comment to every solution.
- Update **[`COMPLEXITY.md`](COMPLEXITY.md)** and **[`PATTERNS.md`](PATTERNS.md)** whenever
  a new pattern or complexity insight is discovered.
- Keep solutions focused, readable, and easy to revisit during revision.

## Roadmap

Topics planned as the practice progresses:

- [x] Arrays
- [ ] Two Pointers
- [ ] Sliding Window
- [ ] Hashing
- [ ] Strings
- [ ] Binary Search
- [ ] Recursion & Backtracking
- [ ] Linked Lists
- [ ] Stacks & Queues
- [ ] Trees & BSTs
- [ ] Tries
- [ ] Heaps
- [ ] Greedy
- [ ] Graphs
- [ ] Dynamic Programming
- [ ] Custom Data Structures

## Contributing

This is primarily a personal learning repo, but contributions that add well-documented,
correct solutions (with complexity analysis) are welcome.

1. Fork the repository.
2. Create a feature branch: `git checkout -b feat/new-problem`.
3. Add your solution in the appropriate topic folder.
4. Commit your changes with a descriptive message.
5. Open a Pull Request.

## License

Distributed under the **MIT License**. See [`LICENSE`](LICENSE) for more information.
