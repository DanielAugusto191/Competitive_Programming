// https://codeforces.com/problemset/problem/456/A
#![allow(unused_imports)]
use std::cmp::{max, min};
use std::io::{stdin};
const _INF: i64 = 0x3f3f3f3f;
#[derive(Default)]
struct Scanner {
    buffer: Vec<String>,
}
impl Scanner {
    fn read<T: std::str::FromStr>(&mut self) -> T {
        loop {
            if let Some(token) = self.buffer.pop() {
                return token.parse().ok().expect("Failed parse");
            }
            let mut input = String::new();
            stdin().read_line(&mut input).expect("Failed read");
            self.buffer = input.split_whitespace().rev().map(String::from).collect();
        }
    }
}

fn main() {
    let mut cin = Scanner::default();

    let n = cin.read::<usize>();
    let mut v: Vec<(i32,i32)> = (0..n).map(|_| (cin.read::<i32>(), cin.read::<i32>())).collect();
    v.sort_by(|a,b| b.1.cmp(&a.1));
    let mut ans = false;
    for i in 1..n {
        if v[i].0 > v[i-1].0 && v[i].1 < v[i-1].1 {
            ans = true;
            break;
        }
    }
    if ans {
        println!("Happy Alex");
    } else {
        println!("Poor Alex");
    }


}
