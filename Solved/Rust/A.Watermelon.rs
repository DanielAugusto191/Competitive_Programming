// https://codeforces.com/contest/4/problem/A
#![allow(unused_imports)]
use std::cmp::{max, min};
use std::io::{stdin, stdout, BufWriter, Write};
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
fn main(){
    let mut cin = Scanner::default();
    let n = cin.read::<usize>();
    if n%2==0 && n != 2 {println!("YES");}else {println!("NO");}
}
