import java.util.Queue;
import java.util.LinkedList;

class RecentCounter {

    Queue<Integer> q;

    public RecentCounter() {
        q = new LinkedList<>();
    }

    public int ping(int t) {
        // Add the new request time
        q.offer(t);

        // Remove requests older than t - 3000
        while (q.peek() < t - 3000) {
            q.poll(); //Anything older than 3 secs (remove it)
        }

        // Number of recent requests
        return q.size();
    }
}